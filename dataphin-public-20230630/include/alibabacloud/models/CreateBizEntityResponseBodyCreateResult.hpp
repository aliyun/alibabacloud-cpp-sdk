// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZENTITYRESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZENTITYRESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBizEntityResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizEntityResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizEntityId, bizEntityId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizEntityResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizEntityId, bizEntityId_);
    };
    CreateBizEntityResponseBodyCreateResult() = default ;
    CreateBizEntityResponseBodyCreateResult(const CreateBizEntityResponseBodyCreateResult &) = default ;
    CreateBizEntityResponseBodyCreateResult(CreateBizEntityResponseBodyCreateResult &&) = default ;
    CreateBizEntityResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizEntityResponseBodyCreateResult() = default ;
    CreateBizEntityResponseBodyCreateResult& operator=(const CreateBizEntityResponseBodyCreateResult &) = default ;
    CreateBizEntityResponseBodyCreateResult& operator=(CreateBizEntityResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizEntityId_ != nullptr; };
    // bizEntityId Field Functions 
    bool hasBizEntityId() const { return this->bizEntityId_ != nullptr;};
    void deleteBizEntityId() { this->bizEntityId_ = nullptr;};
    inline int64_t bizEntityId() const { DARABONBA_PTR_GET_DEFAULT(bizEntityId_, 0L) };
    inline CreateBizEntityResponseBodyCreateResult& setBizEntityId(int64_t bizEntityId) { DARABONBA_PTR_SET_VALUE(bizEntityId_, bizEntityId) };


  protected:
    std::shared_ptr<int64_t> bizEntityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
