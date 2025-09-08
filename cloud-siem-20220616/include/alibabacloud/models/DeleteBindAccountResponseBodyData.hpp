// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBINDACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEBINDACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DeleteBindAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBindAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBindAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DeleteBindAccountResponseBodyData() = default ;
    DeleteBindAccountResponseBodyData(const DeleteBindAccountResponseBodyData &) = default ;
    DeleteBindAccountResponseBodyData(DeleteBindAccountResponseBodyData &&) = default ;
    DeleteBindAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBindAccountResponseBodyData() = default ;
    DeleteBindAccountResponseBodyData& operator=(const DeleteBindAccountResponseBodyData &) = default ;
    DeleteBindAccountResponseBodyData& operator=(DeleteBindAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DeleteBindAccountResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The number of cloud accounts that are removed. The value 1 indicates that cloud account is removed, and a value less than or equal to 0 indicates that the cloud account failed to be removed.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
