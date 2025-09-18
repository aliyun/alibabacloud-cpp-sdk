// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CheckInstanceDatasourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceDatasourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceDatasourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CheckInstanceDatasourceResponseBody() = default ;
    CheckInstanceDatasourceResponseBody(const CheckInstanceDatasourceResponseBody &) = default ;
    CheckInstanceDatasourceResponseBody(CheckInstanceDatasourceResponseBody &&) = default ;
    CheckInstanceDatasourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceDatasourceResponseBody() = default ;
    CheckInstanceDatasourceResponseBody& operator=(const CheckInstanceDatasourceResponseBody &) = default ;
    CheckInstanceDatasourceResponseBody& operator=(CheckInstanceDatasourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->status_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInstanceDatasourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CheckInstanceDatasourceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
