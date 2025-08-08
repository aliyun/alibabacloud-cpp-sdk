// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYSHOPINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYSHOPINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyShopInfoTelephones.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyShopInfoWangWangs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyShopInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyShopInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Emails, emails_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Telephones, telephones_);
      DARABONBA_PTR_TO_JSON(WangWangs, wangWangs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyShopInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Emails, emails_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Telephones, telephones_);
      DARABONBA_PTR_FROM_JSON(WangWangs, wangWangs_);
    };
    DescribeProductResponseBodyShopInfo() = default ;
    DescribeProductResponseBodyShopInfo(const DescribeProductResponseBodyShopInfo &) = default ;
    DescribeProductResponseBodyShopInfo(DescribeProductResponseBodyShopInfo &&) = default ;
    DescribeProductResponseBodyShopInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyShopInfo() = default ;
    DescribeProductResponseBodyShopInfo& operator=(const DescribeProductResponseBodyShopInfo &) = default ;
    DescribeProductResponseBodyShopInfo& operator=(DescribeProductResponseBodyShopInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->emails_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->telephones_ != nullptr && this->wangWangs_ != nullptr; };
    // emails Field Functions 
    bool hasEmails() const { return this->emails_ != nullptr;};
    void deleteEmails() { this->emails_ = nullptr;};
    inline string emails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
    inline DescribeProductResponseBodyShopInfo& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeProductResponseBodyShopInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBodyShopInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // telephones Field Functions 
    bool hasTelephones() const { return this->telephones_ != nullptr;};
    void deleteTelephones() { this->telephones_ = nullptr;};
    inline const Models::DescribeProductResponseBodyShopInfoTelephones & telephones() const { DARABONBA_PTR_GET_CONST(telephones_, Models::DescribeProductResponseBodyShopInfoTelephones) };
    inline Models::DescribeProductResponseBodyShopInfoTelephones telephones() { DARABONBA_PTR_GET(telephones_, Models::DescribeProductResponseBodyShopInfoTelephones) };
    inline DescribeProductResponseBodyShopInfo& setTelephones(const Models::DescribeProductResponseBodyShopInfoTelephones & telephones) { DARABONBA_PTR_SET_VALUE(telephones_, telephones) };
    inline DescribeProductResponseBodyShopInfo& setTelephones(Models::DescribeProductResponseBodyShopInfoTelephones && telephones) { DARABONBA_PTR_SET_RVALUE(telephones_, telephones) };


    // wangWangs Field Functions 
    bool hasWangWangs() const { return this->wangWangs_ != nullptr;};
    void deleteWangWangs() { this->wangWangs_ = nullptr;};
    inline const Models::DescribeProductResponseBodyShopInfoWangWangs & wangWangs() const { DARABONBA_PTR_GET_CONST(wangWangs_, Models::DescribeProductResponseBodyShopInfoWangWangs) };
    inline Models::DescribeProductResponseBodyShopInfoWangWangs wangWangs() { DARABONBA_PTR_GET(wangWangs_, Models::DescribeProductResponseBodyShopInfoWangWangs) };
    inline DescribeProductResponseBodyShopInfo& setWangWangs(const Models::DescribeProductResponseBodyShopInfoWangWangs & wangWangs) { DARABONBA_PTR_SET_VALUE(wangWangs_, wangWangs) };
    inline DescribeProductResponseBodyShopInfo& setWangWangs(Models::DescribeProductResponseBodyShopInfoWangWangs && wangWangs) { DARABONBA_PTR_SET_RVALUE(wangWangs_, wangWangs) };


  protected:
    std::shared_ptr<string> emails_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeProductResponseBodyShopInfoTelephones> telephones_ = nullptr;
    std::shared_ptr<Models::DescribeProductResponseBodyShopInfoWangWangs> wangWangs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
