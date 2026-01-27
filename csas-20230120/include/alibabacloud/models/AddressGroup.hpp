// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSGROUP_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AddressGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
    };
    friend void from_json(const Darabonba::Json& j, AddressGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
    };
    AddressGroup() = default ;
    AddressGroup(const AddressGroup &) = default ;
    AddressGroup(AddressGroup &&) = default ;
    AddressGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressGroup() = default ;
    AddressGroup& operator=(const AddressGroup &) = default ;
    AddressGroup& operator=(AddressGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(End, end_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(End, end_);
      };
      Ports() = default ;
      Ports(const Ports &) = default ;
      Ports(Ports &&) = default ;
      Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ports() = default ;
      Ports& operator=(const Ports &) = default ;
      Ports& operator=(Ports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
      inline Ports& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline Ports& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    protected:
      shared_ptr<int32_t> begin_ {};
      shared_ptr<int32_t> end_ {};
    };

    virtual bool empty() const override { return this->addresses_ == nullptr
        && this->ports_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline AddressGroup& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline AddressGroup& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<AddressGroup::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<AddressGroup::Ports>) };
    inline vector<AddressGroup::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<AddressGroup::Ports>) };
    inline AddressGroup& setPorts(const vector<AddressGroup::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline AddressGroup& setPorts(vector<AddressGroup::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


  protected:
    shared_ptr<vector<string>> addresses_ {};
    shared_ptr<vector<AddressGroup::Ports>> ports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
