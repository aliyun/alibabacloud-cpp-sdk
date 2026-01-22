// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHESRESPONSEBODY_HPP_
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
  class DescribeRdsVswitchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVswitchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVswitchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRdsVswitchesResponseBody() = default ;
    DescribeRdsVswitchesResponseBody(const DescribeRdsVswitchesResponseBody &) = default ;
    DescribeRdsVswitchesResponseBody(DescribeRdsVswitchesResponseBody &&) = default ;
    DescribeRdsVswitchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVswitchesResponseBody() = default ;
    DescribeRdsVswitchesResponseBody& operator=(const DescribeRdsVswitchesResponseBody &) = default ;
    DescribeRdsVswitchesResponseBody& operator=(DescribeRdsVswitchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(VswitchList, vswitchList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(VswitchList, vswitchList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VswitchList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VswitchList& obj) { 
          DARABONBA_PTR_TO_JSON(AvailabeIpCount, availabeIpCount_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(IzNo, izNo_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, VswitchList& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailabeIpCount, availabeIpCount_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        };
        VswitchList() = default ;
        VswitchList(const VswitchList &) = default ;
        VswitchList(VswitchList &&) = default ;
        VswitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VswitchList() = default ;
        VswitchList& operator=(const VswitchList &) = default ;
        VswitchList& operator=(VswitchList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availabeIpCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->isDefault_ == nullptr
        && this->izNo_ == nullptr && this->name_ == nullptr && this->vpcInstanceId_ == nullptr; };
        // availabeIpCount Field Functions 
        bool hasAvailabeIpCount() const { return this->availabeIpCount_ != nullptr;};
        void deleteAvailabeIpCount() { this->availabeIpCount_ = nullptr;};
        inline string getAvailabeIpCount() const { DARABONBA_PTR_GET_DEFAULT(availabeIpCount_, "") };
        inline VswitchList& setAvailabeIpCount(string availabeIpCount) { DARABONBA_PTR_SET_VALUE(availabeIpCount_, availabeIpCount) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VswitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VswitchList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline VswitchList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline VswitchList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
        inline VswitchList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // izNo Field Functions 
        bool hasIzNo() const { return this->izNo_ != nullptr;};
        void deleteIzNo() { this->izNo_ = nullptr;};
        inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
        inline VswitchList& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VswitchList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline VswitchList& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        shared_ptr<string> availabeIpCount_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> isDefault_ {};
        shared_ptr<string> izNo_ {};
        shared_ptr<string> name_ {};
        // vpc id。
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->vswitchList_ == nullptr; };
      // vswitchList Field Functions 
      bool hasVswitchList() const { return this->vswitchList_ != nullptr;};
      void deleteVswitchList() { this->vswitchList_ = nullptr;};
      inline const vector<Data::VswitchList> & getVswitchList() const { DARABONBA_PTR_GET_CONST(vswitchList_, vector<Data::VswitchList>) };
      inline vector<Data::VswitchList> getVswitchList() { DARABONBA_PTR_GET(vswitchList_, vector<Data::VswitchList>) };
      inline Data& setVswitchList(const vector<Data::VswitchList> & vswitchList) { DARABONBA_PTR_SET_VALUE(vswitchList_, vswitchList) };
      inline Data& setVswitchList(vector<Data::VswitchList> && vswitchList) { DARABONBA_PTR_SET_RVALUE(vswitchList_, vswitchList) };


    protected:
      shared_ptr<vector<Data::VswitchList>> vswitchList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeRdsVswitchesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeRdsVswitchesResponseBody::Data) };
    inline DescribeRdsVswitchesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeRdsVswitchesResponseBody::Data) };
    inline DescribeRdsVswitchesResponseBody& setData(const DescribeRdsVswitchesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRdsVswitchesResponseBody& setData(DescribeRdsVswitchesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsVswitchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeRdsVswitchesResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
