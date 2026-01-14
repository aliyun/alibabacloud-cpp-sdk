// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELRESOURCEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELRESOURCEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CancelResourceExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CancelResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CancelResourceExportTaskRequest() = default ;
    CancelResourceExportTaskRequest(const CancelResourceExportTaskRequest &) = default ;
    CancelResourceExportTaskRequest(CancelResourceExportTaskRequest &&) = default ;
    CancelResourceExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelResourceExportTaskRequest() = default ;
    CancelResourceExportTaskRequest& operator=(const CancelResourceExportTaskRequest &) = default ;
    CancelResourceExportTaskRequest& operator=(CancelResourceExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelResourceExportTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
