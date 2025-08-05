// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPRESSIONLISTLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPRESSIONLISTLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetSuppressionListLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuppressionListLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuppressionListLevel, suppressionListLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuppressionListLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuppressionListLevel, suppressionListLevel_);
    };
    GetSuppressionListLevelResponseBody() = default ;
    GetSuppressionListLevelResponseBody(const GetSuppressionListLevelResponseBody &) = default ;
    GetSuppressionListLevelResponseBody(GetSuppressionListLevelResponseBody &&) = default ;
    GetSuppressionListLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuppressionListLevelResponseBody() = default ;
    GetSuppressionListLevelResponseBody& operator=(const GetSuppressionListLevelResponseBody &) = default ;
    GetSuppressionListLevelResponseBody& operator=(GetSuppressionListLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->suppressionListLevel_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSuppressionListLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suppressionListLevel Field Functions 
    bool hasSuppressionListLevel() const { return this->suppressionListLevel_ != nullptr;};
    void deleteSuppressionListLevel() { this->suppressionListLevel_ = nullptr;};
    inline string suppressionListLevel() const { DARABONBA_PTR_GET_DEFAULT(suppressionListLevel_, "") };
    inline GetSuppressionListLevelResponseBody& setSuppressionListLevel(string suppressionListLevel) { DARABONBA_PTR_SET_VALUE(suppressionListLevel_, suppressionListLevel) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> suppressionListLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
