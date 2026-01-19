// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEIDSBYALIYUNUIDV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEIDSBYALIYUNUIDV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class GetInstanceIdsByAliyunUidV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceIdsByAliyunUidV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceIdsByAliyunUidV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
    };
    GetInstanceIdsByAliyunUidV2Request() = default ;
    GetInstanceIdsByAliyunUidV2Request(const GetInstanceIdsByAliyunUidV2Request &) = default ;
    GetInstanceIdsByAliyunUidV2Request(GetInstanceIdsByAliyunUidV2Request &&) = default ;
    GetInstanceIdsByAliyunUidV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceIdsByAliyunUidV2Request() = default ;
    GetInstanceIdsByAliyunUidV2Request& operator=(const GetInstanceIdsByAliyunUidV2Request &) = default ;
    GetInstanceIdsByAliyunUidV2Request& operator=(GetInstanceIdsByAliyunUidV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUid_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline GetInstanceIdsByAliyunUidV2Request& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


  protected:
    shared_ptr<string> aliyunUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
