// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOUPGRADESERVICEDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOUPGRADESERVICEDETAILINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Current2OpenSourceVersion, current2OpenSourceVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Current2OpenSourceVersion, current2OpenSourceVersion_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo(const GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo(GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo& operator=(const GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo& operator=(GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current2OpenSourceVersion_ != nullptr; };
    // current2OpenSourceVersion Field Functions 
    bool hasCurrent2OpenSourceVersion() const { return this->current2OpenSourceVersion_ != nullptr;};
    void deleteCurrent2OpenSourceVersion() { this->current2OpenSourceVersion_ = nullptr;};
    inline string current2OpenSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(current2OpenSourceVersion_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo& setCurrent2OpenSourceVersion(string current2OpenSourceVersion) { DARABONBA_PTR_SET_VALUE(current2OpenSourceVersion_, current2OpenSourceVersion) };


  protected:
    // The open source Apache Kafka version that corresponds to the instance.
    std::shared_ptr<string> current2OpenSourceVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
