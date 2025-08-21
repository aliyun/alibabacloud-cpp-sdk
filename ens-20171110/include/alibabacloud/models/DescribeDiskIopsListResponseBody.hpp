// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskIopsListResponseBodyDiskIopsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDiskIopsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskIopsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskIopsList, diskIopsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskIopsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskIopsList, diskIopsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiskIopsListResponseBody() = default ;
    DescribeDiskIopsListResponseBody(const DescribeDiskIopsListResponseBody &) = default ;
    DescribeDiskIopsListResponseBody(DescribeDiskIopsListResponseBody &&) = default ;
    DescribeDiskIopsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskIopsListResponseBody() = default ;
    DescribeDiskIopsListResponseBody& operator=(const DescribeDiskIopsListResponseBody &) = default ;
    DescribeDiskIopsListResponseBody& operator=(DescribeDiskIopsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskIopsList_ != nullptr
        && this->requestId_ != nullptr; };
    // diskIopsList Field Functions 
    bool hasDiskIopsList() const { return this->diskIopsList_ != nullptr;};
    void deleteDiskIopsList() { this->diskIopsList_ = nullptr;};
    inline const vector<DescribeDiskIopsListResponseBodyDiskIopsList> & diskIopsList() const { DARABONBA_PTR_GET_CONST(diskIopsList_, vector<DescribeDiskIopsListResponseBodyDiskIopsList>) };
    inline vector<DescribeDiskIopsListResponseBodyDiskIopsList> diskIopsList() { DARABONBA_PTR_GET(diskIopsList_, vector<DescribeDiskIopsListResponseBodyDiskIopsList>) };
    inline DescribeDiskIopsListResponseBody& setDiskIopsList(const vector<DescribeDiskIopsListResponseBodyDiskIopsList> & diskIopsList) { DARABONBA_PTR_SET_VALUE(diskIopsList_, diskIopsList) };
    inline DescribeDiskIopsListResponseBody& setDiskIopsList(vector<DescribeDiskIopsListResponseBodyDiskIopsList> && diskIopsList) { DARABONBA_PTR_SET_RVALUE(diskIopsList_, diskIopsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskIopsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IOPS monitoring data of the cloud disk.
    std::shared_ptr<vector<DescribeDiskIopsListResponseBodyDiskIopsList>> diskIopsList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
