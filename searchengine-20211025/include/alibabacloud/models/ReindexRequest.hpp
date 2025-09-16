// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ReindexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReindexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(ossDataPath, ossDataPath_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
    };
    friend void from_json(const Darabonba::Json& j, ReindexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(ossDataPath, ossDataPath_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
    };
    ReindexRequest() = default ;
    ReindexRequest(const ReindexRequest &) = default ;
    ReindexRequest(ReindexRequest &&) = default ;
    ReindexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReindexRequest() = default ;
    ReindexRequest& operator=(const ReindexRequest &) = default ;
    ReindexRequest& operator=(ReindexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataTimeSec_ != nullptr
        && this->ossDataPath_ != nullptr && this->partition_ != nullptr; };
    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline ReindexRequest& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // ossDataPath Field Functions 
    bool hasOssDataPath() const { return this->ossDataPath_ != nullptr;};
    void deleteOssDataPath() { this->ossDataPath_ = nullptr;};
    inline string ossDataPath() const { DARABONBA_PTR_GET_DEFAULT(ossDataPath_, "") };
    inline ReindexRequest& setOssDataPath(string ossDataPath) { DARABONBA_PTR_SET_VALUE(ossDataPath_, ossDataPath) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline ReindexRequest& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


  protected:
    // The timestamp in seconds. The value must be of the INTEGER type. This parameter is required if you specify an API data source.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    // oss data path
    std::shared_ptr<string> ossDataPath_ = nullptr;
    // The partition in the MaxCompute table. This parameter is required if type is set to odps.
    std::shared_ptr<string> partition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
