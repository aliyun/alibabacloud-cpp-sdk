// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUPPRESSIONLISTLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSUPPRESSIONLISTLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SetSuppressionListLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSuppressionListLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuppressionListLevel, suppressionListLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SetSuppressionListLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuppressionListLevel, suppressionListLevel_);
    };
    SetSuppressionListLevelResponseBody() = default ;
    SetSuppressionListLevelResponseBody(const SetSuppressionListLevelResponseBody &) = default ;
    SetSuppressionListLevelResponseBody(SetSuppressionListLevelResponseBody &&) = default ;
    SetSuppressionListLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSuppressionListLevelResponseBody() = default ;
    SetSuppressionListLevelResponseBody& operator=(const SetSuppressionListLevelResponseBody &) = default ;
    SetSuppressionListLevelResponseBody& operator=(SetSuppressionListLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->suppressionListLevel_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetSuppressionListLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suppressionListLevel Field Functions 
    bool hasSuppressionListLevel() const { return this->suppressionListLevel_ != nullptr;};
    void deleteSuppressionListLevel() { this->suppressionListLevel_ = nullptr;};
    inline string getSuppressionListLevel() const { DARABONBA_PTR_GET_DEFAULT(suppressionListLevel_, "") };
    inline SetSuppressionListLevelResponseBody& setSuppressionListLevel(string suppressionListLevel) { DARABONBA_PTR_SET_VALUE(suppressionListLevel_, suppressionListLevel) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> suppressionListLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
