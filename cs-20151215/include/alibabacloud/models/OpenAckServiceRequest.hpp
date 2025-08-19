// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENACKSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENACKSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class OpenAckServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenAckServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OpenAckServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    OpenAckServiceRequest() = default ;
    OpenAckServiceRequest(const OpenAckServiceRequest &) = default ;
    OpenAckServiceRequest(OpenAckServiceRequest &&) = default ;
    OpenAckServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenAckServiceRequest() = default ;
    OpenAckServiceRequest& operator=(const OpenAckServiceRequest &) = default ;
    OpenAckServiceRequest& operator=(OpenAckServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OpenAckServiceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of service that you want to activate. Valid values:
    // 
    // *   `propayasgo`: ACK clusters (including ACK managed clusters and ACK dedicated clusters), ACK Serverless clusters, and registered clusters.
    // *   `edgepayasgo`: ACK Edge clusters.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
