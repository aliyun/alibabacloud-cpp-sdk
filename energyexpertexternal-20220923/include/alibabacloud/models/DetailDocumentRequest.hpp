// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETAILDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class DetailDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DetailDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    DetailDocumentRequest() = default ;
    DetailDocumentRequest(const DetailDocumentRequest &) = default ;
    DetailDocumentRequest(DetailDocumentRequest &&) = default ;
    DetailDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailDocumentRequest() = default ;
    DetailDocumentRequest& operator=(const DetailDocumentRequest &) = default ;
    DetailDocumentRequest& operator=(DetailDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DetailDocumentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
