// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCostCenterResponseBodyCostCenterDtoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateCostCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCostCenterResponseBody() = default ;
    CreateCostCenterResponseBody(const CreateCostCenterResponseBody &) = default ;
    CreateCostCenterResponseBody(CreateCostCenterResponseBody &&) = default ;
    CreateCostCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterResponseBody() = default ;
    CreateCostCenterResponseBody& operator=(const CreateCostCenterResponseBody &) = default ;
    CreateCostCenterResponseBody& operator=(CreateCostCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterDtoList_ != nullptr
        && this->metadata_ != nullptr && this->requestId_ != nullptr; };
    // costCenterDtoList Field Functions 
    bool hasCostCenterDtoList() const { return this->costCenterDtoList_ != nullptr;};
    void deleteCostCenterDtoList() { this->costCenterDtoList_ = nullptr;};
    inline const vector<CreateCostCenterResponseBodyCostCenterDtoList> & costCenterDtoList() const { DARABONBA_PTR_GET_CONST(costCenterDtoList_, vector<CreateCostCenterResponseBodyCostCenterDtoList>) };
    inline vector<CreateCostCenterResponseBodyCostCenterDtoList> costCenterDtoList() { DARABONBA_PTR_GET(costCenterDtoList_, vector<CreateCostCenterResponseBodyCostCenterDtoList>) };
    inline CreateCostCenterResponseBody& setCostCenterDtoList(const vector<CreateCostCenterResponseBodyCostCenterDtoList> & costCenterDtoList) { DARABONBA_PTR_SET_VALUE(costCenterDtoList_, costCenterDtoList) };
    inline CreateCostCenterResponseBody& setCostCenterDtoList(vector<CreateCostCenterResponseBodyCostCenterDtoList> && costCenterDtoList) { DARABONBA_PTR_SET_RVALUE(costCenterDtoList_, costCenterDtoList) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline CreateCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateCostCenterResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<CreateCostCenterResponseBodyCostCenterDtoList>> costCenterDtoList_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
