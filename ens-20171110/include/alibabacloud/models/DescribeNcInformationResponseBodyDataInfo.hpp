// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODYDATAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODYDATAINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNCInformationResponseBodyDataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNCInformationResponseBodyDataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNCInformationResponseBodyDataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeNCInformationResponseBodyDataInfo() = default ;
    DescribeNCInformationResponseBodyDataInfo(const DescribeNCInformationResponseBodyDataInfo &) = default ;
    DescribeNCInformationResponseBodyDataInfo(DescribeNCInformationResponseBodyDataInfo &&) = default ;
    DescribeNCInformationResponseBodyDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNCInformationResponseBodyDataInfo() = default ;
    DescribeNCInformationResponseBodyDataInfo& operator=(const DescribeNCInformationResponseBodyDataInfo &) = default ;
    DescribeNCInformationResponseBodyDataInfo& operator=(DescribeNCInformationResponseBodyDataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->name_ == nullptr && return this->tag_ == nullptr && return this->uuid_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeNCInformationResponseBodyDataInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNCInformationResponseBodyDataInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<string> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
    inline vector<string> tag() { DARABONBA_PTR_GET(tag_, vector<string>) };
    inline DescribeNCInformationResponseBodyDataInfo& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeNCInformationResponseBodyDataInfo& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeNCInformationResponseBodyDataInfo& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> tag_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
