// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDGXB700RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDGXB700RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindGxb700ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindGxb700ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
    };
    friend void from_json(const Darabonba::Json& j, BindGxb700ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
    };
    BindGxb700ResponseBodyData() = default ;
    BindGxb700ResponseBodyData(const BindGxb700ResponseBodyData &) = default ;
    BindGxb700ResponseBodyData(BindGxb700ResponseBodyData &&) = default ;
    BindGxb700ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindGxb700ResponseBodyData() = default ;
    BindGxb700ResponseBodyData& operator=(const BindGxb700ResponseBodyData &) = default ;
    BindGxb700ResponseBodyData& operator=(BindGxb700ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretNo_ == nullptr
        && return this->subsId_ == nullptr; };
    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string secretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline BindGxb700ResponseBodyData& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline int64_t subsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, 0L) };
    inline BindGxb700ResponseBodyData& setSubsId(int64_t subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


  protected:
    std::shared_ptr<string> secretNo_ = nullptr;
    std::shared_ptr<int64_t> subsId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
