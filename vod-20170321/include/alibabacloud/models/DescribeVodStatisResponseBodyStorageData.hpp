// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODYSTORAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODYSTORAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStatisResponseBodyStorageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStatisResponseBodyStorageData& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStatisResponseBodyStorageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    DescribeVodStatisResponseBodyStorageData() = default ;
    DescribeVodStatisResponseBodyStorageData(const DescribeVodStatisResponseBodyStorageData &) = default ;
    DescribeVodStatisResponseBodyStorageData(DescribeVodStatisResponseBodyStorageData &&) = default ;
    DescribeVodStatisResponseBodyStorageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStatisResponseBodyStorageData() = default ;
    DescribeVodStatisResponseBodyStorageData& operator=(const DescribeVodStatisResponseBodyStorageData &) = default ;
    DescribeVodStatisResponseBodyStorageData& operator=(DescribeVodStatisResponseBodyStorageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr
        && this->traffic_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeVodStatisResponseBodyStorageData& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int64_t traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0L) };
    inline DescribeVodStatisResponseBodyStorageData& setTraffic(int64_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<int64_t> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
