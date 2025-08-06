// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODYNODEMODELPHONEDATAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODYNODEMODELPHONEDATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneDataId, phoneDataId_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneDataId, phoneDataId_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
    };
    DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo() = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo(const DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo &) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo(DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo &&) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo() = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo& operator=(const DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo &) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo& operator=(DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phoneDataId_ != nullptr
        && this->phoneDataVolume_ != nullptr; };
    // phoneDataId Field Functions 
    bool hasPhoneDataId() const { return this->phoneDataId_ != nullptr;};
    void deletePhoneDataId() { this->phoneDataId_ = nullptr;};
    inline string phoneDataId() const { DARABONBA_PTR_GET_DEFAULT(phoneDataId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo& setPhoneDataId(string phoneDataId) { DARABONBA_PTR_SET_VALUE(phoneDataId_, phoneDataId) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t phoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


  protected:
    std::shared_ptr<string> phoneDataId_ = nullptr;
    std::shared_ptr<int32_t> phoneDataVolume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
