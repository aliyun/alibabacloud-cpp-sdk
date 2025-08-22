// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListExecutorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IsDesignated, isDesignated_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IsDesignated, isDesignated_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ListExecutorsResponseBodyData() = default ;
    ListExecutorsResponseBodyData(const ListExecutorsResponseBodyData &) = default ;
    ListExecutorsResponseBodyData(ListExecutorsResponseBodyData &&) = default ;
    ListExecutorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsResponseBodyData() = default ;
    ListExecutorsResponseBodyData& operator=(const ListExecutorsResponseBodyData &) = default ;
    ListExecutorsResponseBodyData& operator=(ListExecutorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->ip_ != nullptr && this->isDesignated_ != nullptr && this->label_ != nullptr && this->online_ != nullptr && this->port_ != nullptr
        && this->version_ != nullptr && this->weight_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListExecutorsResponseBodyData& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListExecutorsResponseBodyData& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isDesignated Field Functions 
    bool hasIsDesignated() const { return this->isDesignated_ != nullptr;};
    void deleteIsDesignated() { this->isDesignated_ = nullptr;};
    inline bool isDesignated() const { DARABONBA_PTR_GET_DEFAULT(isDesignated_, false) };
    inline ListExecutorsResponseBodyData& setIsDesignated(bool isDesignated) { DARABONBA_PTR_SET_VALUE(isDesignated_, isDesignated) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListExecutorsResponseBodyData& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ListExecutorsResponseBodyData& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListExecutorsResponseBodyData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListExecutorsResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ListExecutorsResponseBodyData& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<bool> isDesignated_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
