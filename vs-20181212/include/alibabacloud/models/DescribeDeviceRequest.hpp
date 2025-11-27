// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncludeDirectory, includeDirectory_);
      DARABONBA_PTR_TO_JSON(IncludeStats, includeStats_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncludeDirectory, includeDirectory_);
      DARABONBA_PTR_FROM_JSON(IncludeStats, includeStats_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeDeviceRequest() = default ;
    DescribeDeviceRequest(const DescribeDeviceRequest &) = default ;
    DescribeDeviceRequest(DescribeDeviceRequest &&) = default ;
    DescribeDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceRequest() = default ;
    DescribeDeviceRequest& operator=(const DescribeDeviceRequest &) = default ;
    DescribeDeviceRequest& operator=(DescribeDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->includeDirectory_ == nullptr && return this->includeStats_ == nullptr && return this->ownerId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDeviceRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // includeDirectory Field Functions 
    bool hasIncludeDirectory() const { return this->includeDirectory_ != nullptr;};
    void deleteIncludeDirectory() { this->includeDirectory_ = nullptr;};
    inline bool includeDirectory() const { DARABONBA_PTR_GET_DEFAULT(includeDirectory_, false) };
    inline DescribeDeviceRequest& setIncludeDirectory(bool includeDirectory) { DARABONBA_PTR_SET_VALUE(includeDirectory_, includeDirectory) };


    // includeStats Field Functions 
    bool hasIncludeStats() const { return this->includeStats_ != nullptr;};
    void deleteIncludeStats() { this->includeStats_ = nullptr;};
    inline bool includeStats() const { DARABONBA_PTR_GET_DEFAULT(includeStats_, false) };
    inline DescribeDeviceRequest& setIncludeStats(bool includeStats) { DARABONBA_PTR_SET_VALUE(includeStats_, includeStats) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDeviceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> includeDirectory_ = nullptr;
    std::shared_ptr<bool> includeStats_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
