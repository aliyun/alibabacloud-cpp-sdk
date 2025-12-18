// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCEDSEARCHFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCEDSEARCHFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAdvancedSearchFileResponseBodyResourceSearch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAdvancedSearchFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvancedSearchFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceSearch, resourceSearch_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvancedSearchFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceSearch, resourceSearch_);
    };
    GetAdvancedSearchFileResponseBody() = default ;
    GetAdvancedSearchFileResponseBody(const GetAdvancedSearchFileResponseBody &) = default ;
    GetAdvancedSearchFileResponseBody(GetAdvancedSearchFileResponseBody &&) = default ;
    GetAdvancedSearchFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvancedSearchFileResponseBody() = default ;
    GetAdvancedSearchFileResponseBody& operator=(const GetAdvancedSearchFileResponseBody &) = default ;
    GetAdvancedSearchFileResponseBody& operator=(GetAdvancedSearchFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceSearch_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdvancedSearchFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceSearch Field Functions 
    bool hasResourceSearch() const { return this->resourceSearch_ != nullptr;};
    void deleteResourceSearch() { this->resourceSearch_ = nullptr;};
    inline const GetAdvancedSearchFileResponseBodyResourceSearch & resourceSearch() const { DARABONBA_PTR_GET_CONST(resourceSearch_, GetAdvancedSearchFileResponseBodyResourceSearch) };
    inline GetAdvancedSearchFileResponseBodyResourceSearch resourceSearch() { DARABONBA_PTR_GET(resourceSearch_, GetAdvancedSearchFileResponseBodyResourceSearch) };
    inline GetAdvancedSearchFileResponseBody& setResourceSearch(const GetAdvancedSearchFileResponseBodyResourceSearch & resourceSearch) { DARABONBA_PTR_SET_VALUE(resourceSearch_, resourceSearch) };
    inline GetAdvancedSearchFileResponseBody& setResourceSearch(GetAdvancedSearchFileResponseBodyResourceSearch && resourceSearch) { DARABONBA_PTR_SET_RVALUE(resourceSearch_, resourceSearch) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource file.
    std::shared_ptr<GetAdvancedSearchFileResponseBodyResourceSearch> resourceSearch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
