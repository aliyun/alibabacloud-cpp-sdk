// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZUNITRESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZUNITRESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBizUnitResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizUnitResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizUnitResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
    };
    CreateBizUnitResponseBodyCreateResult() = default ;
    CreateBizUnitResponseBodyCreateResult(const CreateBizUnitResponseBodyCreateResult &) = default ;
    CreateBizUnitResponseBodyCreateResult(CreateBizUnitResponseBodyCreateResult &&) = default ;
    CreateBizUnitResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizUnitResponseBodyCreateResult() = default ;
    CreateBizUnitResponseBodyCreateResult& operator=(const CreateBizUnitResponseBodyCreateResult &) = default ;
    CreateBizUnitResponseBodyCreateResult& operator=(CreateBizUnitResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitId_ != nullptr; };
    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline CreateBizUnitResponseBodyCreateResult& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


  protected:
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
