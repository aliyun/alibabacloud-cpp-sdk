// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONITORDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMONITORDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetMonitorDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonitorDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonitorDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetMonitorDataRequest() = default ;
    GetMonitorDataRequest(const GetMonitorDataRequest &) = default ;
    GetMonitorDataRequest(GetMonitorDataRequest &&) = default ;
    GetMonitorDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonitorDataRequest() = default ;
    GetMonitorDataRequest& operator=(const GetMonitorDataRequest &) = default ;
    GetMonitorDataRequest& operator=(GetMonitorDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline GetMonitorDataRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
