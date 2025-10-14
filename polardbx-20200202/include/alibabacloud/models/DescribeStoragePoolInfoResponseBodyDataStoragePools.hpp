// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODYDATASTORAGEPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODYDATASTORAGEPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeStoragePoolInfoResponseBodyDataStoragePools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePoolInfoResponseBodyDataStoragePools& obj) { 
      DARABONBA_PTR_TO_JSON(Class, class_);
      DARABONBA_PTR_TO_JSON(DnIdList, dnIdList_);
      DARABONBA_PTR_TO_JSON(DnIdString, dnIdString_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IdleDNIdList, idleDNIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UnDeletableDNId, unDeletableDNId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePoolInfoResponseBodyDataStoragePools& obj) { 
      DARABONBA_PTR_FROM_JSON(Class, class_);
      DARABONBA_PTR_FROM_JSON(DnIdList, dnIdList_);
      DARABONBA_PTR_FROM_JSON(DnIdString, dnIdString_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IdleDNIdList, idleDNIdList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UnDeletableDNId, unDeletableDNId_);
    };
    DescribeStoragePoolInfoResponseBodyDataStoragePools() = default ;
    DescribeStoragePoolInfoResponseBodyDataStoragePools(const DescribeStoragePoolInfoResponseBodyDataStoragePools &) = default ;
    DescribeStoragePoolInfoResponseBodyDataStoragePools(DescribeStoragePoolInfoResponseBodyDataStoragePools &&) = default ;
    DescribeStoragePoolInfoResponseBodyDataStoragePools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePoolInfoResponseBodyDataStoragePools() = default ;
    DescribeStoragePoolInfoResponseBodyDataStoragePools& operator=(const DescribeStoragePoolInfoResponseBodyDataStoragePools &) = default ;
    DescribeStoragePoolInfoResponseBodyDataStoragePools& operator=(DescribeStoragePoolInfoResponseBodyDataStoragePools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->class_ == nullptr
        && return this->dnIdList_ == nullptr && return this->dnIdString_ == nullptr && return this->extra_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr
        && return this->idleDNIdList_ == nullptr && return this->name_ == nullptr && return this->unDeletableDNId_ == nullptr; };
    // class Field Functions 
    bool hasClass() const { return this->class_ != nullptr;};
    void deleteClass() { this->class_ = nullptr;};
    inline string _class() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


    // dnIdList Field Functions 
    bool hasDnIdList() const { return this->dnIdList_ != nullptr;};
    void deleteDnIdList() { this->dnIdList_ = nullptr;};
    inline const vector<string> & dnIdList() const { DARABONBA_PTR_GET_CONST(dnIdList_, vector<string>) };
    inline vector<string> dnIdList() { DARABONBA_PTR_GET(dnIdList_, vector<string>) };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setDnIdList(const vector<string> & dnIdList) { DARABONBA_PTR_SET_VALUE(dnIdList_, dnIdList) };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setDnIdList(vector<string> && dnIdList) { DARABONBA_PTR_SET_RVALUE(dnIdList_, dnIdList) };


    // dnIdString Field Functions 
    bool hasDnIdString() const { return this->dnIdString_ != nullptr;};
    void deleteDnIdString() { this->dnIdString_ = nullptr;};
    inline string dnIdString() const { DARABONBA_PTR_GET_DEFAULT(dnIdString_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setDnIdString(string dnIdString) { DARABONBA_PTR_SET_VALUE(dnIdString_, dnIdString) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // idleDNIdList Field Functions 
    bool hasIdleDNIdList() const { return this->idleDNIdList_ != nullptr;};
    void deleteIdleDNIdList() { this->idleDNIdList_ = nullptr;};
    inline const vector<string> & idleDNIdList() const { DARABONBA_PTR_GET_CONST(idleDNIdList_, vector<string>) };
    inline vector<string> idleDNIdList() { DARABONBA_PTR_GET(idleDNIdList_, vector<string>) };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setIdleDNIdList(const vector<string> & idleDNIdList) { DARABONBA_PTR_SET_VALUE(idleDNIdList_, idleDNIdList) };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setIdleDNIdList(vector<string> && idleDNIdList) { DARABONBA_PTR_SET_RVALUE(idleDNIdList_, idleDNIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // unDeletableDNId Field Functions 
    bool hasUnDeletableDNId() const { return this->unDeletableDNId_ != nullptr;};
    void deleteUnDeletableDNId() { this->unDeletableDNId_ = nullptr;};
    inline string unDeletableDNId() const { DARABONBA_PTR_GET_DEFAULT(unDeletableDNId_, "") };
    inline DescribeStoragePoolInfoResponseBodyDataStoragePools& setUnDeletableDNId(string unDeletableDNId) { DARABONBA_PTR_SET_VALUE(unDeletableDNId_, unDeletableDNId) };


  protected:
    std::shared_ptr<string> class_ = nullptr;
    std::shared_ptr<vector<string>> dnIdList_ = nullptr;
    // DN id
    std::shared_ptr<string> dnIdString_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<string>> idleDNIdList_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> unDeletableDNId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
