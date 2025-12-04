// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTVPDBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTVPDBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContentVpdBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContentVpdBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContentVpdBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
    };
    GetVccResponseBodyContentVpdBaseInfo() = default ;
    GetVccResponseBodyContentVpdBaseInfo(const GetVccResponseBodyContentVpdBaseInfo &) = default ;
    GetVccResponseBodyContentVpdBaseInfo(GetVccResponseBodyContentVpdBaseInfo &&) = default ;
    GetVccResponseBodyContentVpdBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContentVpdBaseInfo() = default ;
    GetVccResponseBodyContentVpdBaseInfo& operator=(const GetVccResponseBodyContentVpdBaseInfo &) = default ;
    GetVccResponseBodyContentVpdBaseInfo& operator=(GetVccResponseBodyContentVpdBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->createTime_ == nullptr && return this->vpdId_ == nullptr && return this->vpdName_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetVccResponseBodyContentVpdBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVccResponseBodyContentVpdBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetVccResponseBodyContentVpdBaseInfo& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdName Field Functions 
    bool hasVpdName() const { return this->vpdName_ != nullptr;};
    void deleteVpdName() { this->vpdName_ = nullptr;};
    inline string vpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
    inline GetVccResponseBodyContentVpdBaseInfo& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


  protected:
    // Network address segment
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Lingjun CIDR block instance ID
    std::shared_ptr<string> vpdId_ = nullptr;
    // Lingjun CIDR block instance name
    std::shared_ptr<string> vpdName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
