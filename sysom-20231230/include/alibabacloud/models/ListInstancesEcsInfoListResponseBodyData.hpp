// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESECSINFOLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESECSINFOLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesEcsInfoListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesEcsInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(tag_key, tagKey_);
      DARABONBA_PTR_TO_JSON(tag_value, tagValue_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesEcsInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(tag_key, tagKey_);
      DARABONBA_PTR_FROM_JSON(tag_value, tagValue_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListInstancesEcsInfoListResponseBodyData() = default ;
    ListInstancesEcsInfoListResponseBodyData(const ListInstancesEcsInfoListResponseBodyData &) = default ;
    ListInstancesEcsInfoListResponseBodyData(ListInstancesEcsInfoListResponseBodyData &&) = default ;
    ListInstancesEcsInfoListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesEcsInfoListResponseBodyData() = default ;
    ListInstancesEcsInfoListResponseBodyData& operator=(const ListInstancesEcsInfoListResponseBodyData &) = default ;
    ListInstancesEcsInfoListResponseBodyData& operator=(ListInstancesEcsInfoListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->tagKey_ == nullptr && return this->tagValue_ == nullptr && return this->type_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListInstancesEcsInfoListResponseBodyData& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListInstancesEcsInfoListResponseBodyData& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListInstancesEcsInfoListResponseBodyData& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstancesEcsInfoListResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> tagKey_ = nullptr;
    std::shared_ptr<string> tagValue_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
