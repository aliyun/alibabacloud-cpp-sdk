// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKITEMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKITEMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCheckItemResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckItemResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckItemResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
    };
    CreateCheckItemResponseBodyData() = default ;
    CreateCheckItemResponseBodyData(const CreateCheckItemResponseBodyData &) = default ;
    CreateCheckItemResponseBodyData(CreateCheckItemResponseBodyData &&) = default ;
    CreateCheckItemResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckItemResponseBodyData() = default ;
    CreateCheckItemResponseBodyData& operator=(const CreateCheckItemResponseBodyData &) = default ;
    CreateCheckItemResponseBodyData& operator=(CreateCheckItemResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline CreateCheckItemResponseBodyData& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


  protected:
    // 创建成功返回的检查项ID。
    std::shared_ptr<int64_t> checkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
