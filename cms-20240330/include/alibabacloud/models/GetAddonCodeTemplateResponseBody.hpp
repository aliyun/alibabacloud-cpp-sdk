// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONCODETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONCODETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonCodeTemplateResponseBodyCodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonCodeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonCodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(codes, codes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonCodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(codes, codes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAddonCodeTemplateResponseBody() = default ;
    GetAddonCodeTemplateResponseBody(const GetAddonCodeTemplateResponseBody &) = default ;
    GetAddonCodeTemplateResponseBody(GetAddonCodeTemplateResponseBody &&) = default ;
    GetAddonCodeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonCodeTemplateResponseBody() = default ;
    GetAddonCodeTemplateResponseBody& operator=(const GetAddonCodeTemplateResponseBody &) = default ;
    GetAddonCodeTemplateResponseBody& operator=(GetAddonCodeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codes_ == nullptr
        && return this->requestId_ == nullptr; };
    // codes Field Functions 
    bool hasCodes() const { return this->codes_ != nullptr;};
    void deleteCodes() { this->codes_ = nullptr;};
    inline const vector<GetAddonCodeTemplateResponseBodyCodes> & codes() const { DARABONBA_PTR_GET_CONST(codes_, vector<GetAddonCodeTemplateResponseBodyCodes>) };
    inline vector<GetAddonCodeTemplateResponseBodyCodes> codes() { DARABONBA_PTR_GET(codes_, vector<GetAddonCodeTemplateResponseBodyCodes>) };
    inline GetAddonCodeTemplateResponseBody& setCodes(const vector<GetAddonCodeTemplateResponseBodyCodes> & codes) { DARABONBA_PTR_SET_VALUE(codes_, codes) };
    inline GetAddonCodeTemplateResponseBody& setCodes(vector<GetAddonCodeTemplateResponseBodyCodes> && codes) { DARABONBA_PTR_SET_RVALUE(codes_, codes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonCodeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetAddonCodeTemplateResponseBodyCodes>> codes_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
