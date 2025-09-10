// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONESERVICEREQUEST_HPP_
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
  class CloneServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CloneServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CloneServiceRequest() = default ;
    CloneServiceRequest(const CloneServiceRequest &) = default ;
    CloneServiceRequest(CloneServiceRequest &&) = default ;
    CloneServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneServiceRequest() = default ;
    CloneServiceRequest& operator=(const CloneServiceRequest &) = default ;
    CloneServiceRequest& operator=(CloneServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr
        && this->body_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline CloneServiceRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CloneServiceRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CloneServiceRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The label of the service to be cloned.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // The request body. For more information, see [CreateService](https://help.aliyun.com/document_detail/412086.html).
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
