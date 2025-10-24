// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICELABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICELABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    UpdateServiceLabelRequest() = default ;
    UpdateServiceLabelRequest(const UpdateServiceLabelRequest &) = default ;
    UpdateServiceLabelRequest(UpdateServiceLabelRequest &&) = default ;
    UpdateServiceLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceLabelRequest() = default ;
    UpdateServiceLabelRequest& operator=(const UpdateServiceLabelRequest &) = default ;
    UpdateServiceLabelRequest& operator=(UpdateServiceLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline UpdateServiceLabelRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateServiceLabelRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The custom service tags.
    // 
    // This parameter is required.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
