// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPFILTERLISTRESPONSEBODYDATAIPFILTERS_HPP_
#define ALIBABACLOUD_MODELS_GETIPFILTERLISTRESPONSEBODYDATAIPFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetIpfilterListResponseBodyDataIpfilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpfilterListResponseBodyDataIpfilters& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpfilterListResponseBodyDataIpfilters& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
    };
    GetIpfilterListResponseBodyDataIpfilters() = default ;
    GetIpfilterListResponseBodyDataIpfilters(const GetIpfilterListResponseBodyDataIpfilters &) = default ;
    GetIpfilterListResponseBodyDataIpfilters(GetIpfilterListResponseBodyDataIpfilters &&) = default ;
    GetIpfilterListResponseBodyDataIpfilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpfilterListResponseBodyDataIpfilters() = default ;
    GetIpfilterListResponseBodyDataIpfilters& operator=(const GetIpfilterListResponseBodyDataIpfilters &) = default ;
    GetIpfilterListResponseBodyDataIpfilters& operator=(GetIpfilterListResponseBodyDataIpfilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->id_ == nullptr && return this->ipAddress_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetIpfilterListResponseBodyDataIpfilters& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetIpfilterListResponseBodyDataIpfilters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline GetIpfilterListResponseBodyDataIpfilters& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


  protected:
    // timestamp
    std::shared_ptr<string> createTime_ = nullptr;
    // Record ID
    std::shared_ptr<string> id_ = nullptr;
    // IP address/IP range/IP segment
    std::shared_ptr<string> ipAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
