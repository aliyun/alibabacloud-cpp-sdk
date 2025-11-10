// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELCOMMONSCHEMAREFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELCOMMONSCHEMAREFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetUmodelCommonSchemaRefResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUmodelCommonSchemaRefResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonSchemaRef, commonSchemaRef_);
    };
    friend void from_json(const Darabonba::Json& j, GetUmodelCommonSchemaRefResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonSchemaRef, commonSchemaRef_);
    };
    GetUmodelCommonSchemaRefResponseBody() = default ;
    GetUmodelCommonSchemaRefResponseBody(const GetUmodelCommonSchemaRefResponseBody &) = default ;
    GetUmodelCommonSchemaRefResponseBody(GetUmodelCommonSchemaRefResponseBody &&) = default ;
    GetUmodelCommonSchemaRefResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUmodelCommonSchemaRefResponseBody() = default ;
    GetUmodelCommonSchemaRefResponseBody& operator=(const GetUmodelCommonSchemaRefResponseBody &) = default ;
    GetUmodelCommonSchemaRefResponseBody& operator=(GetUmodelCommonSchemaRefResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonSchemaRef_ == nullptr; };
    // commonSchemaRef Field Functions 
    bool hasCommonSchemaRef() const { return this->commonSchemaRef_ != nullptr;};
    void deleteCommonSchemaRef() { this->commonSchemaRef_ = nullptr;};
    inline const vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef> & commonSchemaRef() const { DARABONBA_PTR_GET_CONST(commonSchemaRef_, vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef>) };
    inline vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef> commonSchemaRef() { DARABONBA_PTR_GET(commonSchemaRef_, vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef>) };
    inline GetUmodelCommonSchemaRefResponseBody& setCommonSchemaRef(const vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef> & commonSchemaRef) { DARABONBA_PTR_SET_VALUE(commonSchemaRef_, commonSchemaRef) };
    inline GetUmodelCommonSchemaRefResponseBody& setCommonSchemaRef(vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef> && commonSchemaRef) { DARABONBA_PTR_SET_RVALUE(commonSchemaRef_, commonSchemaRef) };


  protected:
    std::shared_ptr<vector<GetUmodelCommonSchemaRefResponseBodyCommonSchemaRef>> commonSchemaRef_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
