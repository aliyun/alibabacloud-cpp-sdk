// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateComputeSubQuotaRequestSubQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeSubQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSubQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSubQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    UpdateComputeSubQuotaRequest() = default ;
    UpdateComputeSubQuotaRequest(const UpdateComputeSubQuotaRequest &) = default ;
    UpdateComputeSubQuotaRequest(UpdateComputeSubQuotaRequest &&) = default ;
    UpdateComputeSubQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSubQuotaRequest() = default ;
    UpdateComputeSubQuotaRequest& operator=(const UpdateComputeSubQuotaRequest &) = default ;
    UpdateComputeSubQuotaRequest& operator=(UpdateComputeSubQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subQuotaInfoList_ != nullptr; };
    // subQuotaInfoList Field Functions 
    bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
    void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
    inline const vector<UpdateComputeSubQuotaRequestSubQuotaInfoList> & subQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>) };
    inline vector<UpdateComputeSubQuotaRequestSubQuotaInfoList> subQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>) };
    inline UpdateComputeSubQuotaRequest& setSubQuotaInfoList(const vector<UpdateComputeSubQuotaRequestSubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
    inline UpdateComputeSubQuotaRequest& setSubQuotaInfoList(vector<UpdateComputeSubQuotaRequestSubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


  protected:
    // The list of level-2 quotas.
    std::shared_ptr<vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>> subQuotaInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
