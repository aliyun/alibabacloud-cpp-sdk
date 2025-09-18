// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATUREFGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATUREFGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureFGInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureFGInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureFGInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetModelFeatureFGInfoResponseBody() = default ;
    GetModelFeatureFGInfoResponseBody(const GetModelFeatureFGInfoResponseBody &) = default ;
    GetModelFeatureFGInfoResponseBody(GetModelFeatureFGInfoResponseBody &&) = default ;
    GetModelFeatureFGInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureFGInfoResponseBody() = default ;
    GetModelFeatureFGInfoResponseBody& operator=(const GetModelFeatureFGInfoResponseBody &) = default ;
    GetModelFeatureFGInfoResponseBody& operator=(GetModelFeatureFGInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetModelFeatureFGInfoResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelFeatureFGInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
