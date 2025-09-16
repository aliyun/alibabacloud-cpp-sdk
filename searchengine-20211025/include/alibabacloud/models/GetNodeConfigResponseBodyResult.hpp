// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODECONFIGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETNODECONFIGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetNodeConfigResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(dataDuplicateNumber, dataDuplicateNumber_);
      DARABONBA_PTR_TO_JSON(dataFragmentNumber, dataFragmentNumber_);
      DARABONBA_PTR_TO_JSON(flowRatio, flowRatio_);
      DARABONBA_PTR_TO_JSON(minServicePercent, minServicePercent_);
      DARABONBA_PTR_TO_JSON(published, published_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(dataDuplicateNumber, dataDuplicateNumber_);
      DARABONBA_PTR_FROM_JSON(dataFragmentNumber, dataFragmentNumber_);
      DARABONBA_PTR_FROM_JSON(flowRatio, flowRatio_);
      DARABONBA_PTR_FROM_JSON(minServicePercent, minServicePercent_);
      DARABONBA_PTR_FROM_JSON(published, published_);
    };
    GetNodeConfigResponseBodyResult() = default ;
    GetNodeConfigResponseBodyResult(const GetNodeConfigResponseBodyResult &) = default ;
    GetNodeConfigResponseBodyResult(GetNodeConfigResponseBodyResult &&) = default ;
    GetNodeConfigResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeConfigResponseBodyResult() = default ;
    GetNodeConfigResponseBodyResult& operator=(const GetNodeConfigResponseBodyResult &) = default ;
    GetNodeConfigResponseBodyResult& operator=(GetNodeConfigResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->dataDuplicateNumber_ != nullptr && this->dataFragmentNumber_ != nullptr && this->flowRatio_ != nullptr && this->minServicePercent_ != nullptr && this->published_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline GetNodeConfigResponseBodyResult& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // dataDuplicateNumber Field Functions 
    bool hasDataDuplicateNumber() const { return this->dataDuplicateNumber_ != nullptr;};
    void deleteDataDuplicateNumber() { this->dataDuplicateNumber_ = nullptr;};
    inline int32_t dataDuplicateNumber() const { DARABONBA_PTR_GET_DEFAULT(dataDuplicateNumber_, 0) };
    inline GetNodeConfigResponseBodyResult& setDataDuplicateNumber(int32_t dataDuplicateNumber) { DARABONBA_PTR_SET_VALUE(dataDuplicateNumber_, dataDuplicateNumber) };


    // dataFragmentNumber Field Functions 
    bool hasDataFragmentNumber() const { return this->dataFragmentNumber_ != nullptr;};
    void deleteDataFragmentNumber() { this->dataFragmentNumber_ = nullptr;};
    inline int32_t dataFragmentNumber() const { DARABONBA_PTR_GET_DEFAULT(dataFragmentNumber_, 0) };
    inline GetNodeConfigResponseBodyResult& setDataFragmentNumber(int32_t dataFragmentNumber) { DARABONBA_PTR_SET_VALUE(dataFragmentNumber_, dataFragmentNumber) };


    // flowRatio Field Functions 
    bool hasFlowRatio() const { return this->flowRatio_ != nullptr;};
    void deleteFlowRatio() { this->flowRatio_ = nullptr;};
    inline int32_t flowRatio() const { DARABONBA_PTR_GET_DEFAULT(flowRatio_, 0) };
    inline GetNodeConfigResponseBodyResult& setFlowRatio(int32_t flowRatio) { DARABONBA_PTR_SET_VALUE(flowRatio_, flowRatio) };


    // minServicePercent Field Functions 
    bool hasMinServicePercent() const { return this->minServicePercent_ != nullptr;};
    void deleteMinServicePercent() { this->minServicePercent_ = nullptr;};
    inline int32_t minServicePercent() const { DARABONBA_PTR_GET_DEFAULT(minServicePercent_, 0) };
    inline GetNodeConfigResponseBodyResult& setMinServicePercent(int32_t minServicePercent) { DARABONBA_PTR_SET_VALUE(minServicePercent_, minServicePercent) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline GetNodeConfigResponseBodyResult& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


  protected:
    // Indicates whether the index is effective online.
    std::shared_ptr<bool> active_ = nullptr;
    // The number of data replicas.
    std::shared_ptr<int32_t> dataDuplicateNumber_ = nullptr;
    // The number of data shards.
    std::shared_ptr<int32_t> dataFragmentNumber_ = nullptr;
    // The traffic percentage.
    std::shared_ptr<int32_t> flowRatio_ = nullptr;
    // The minimum service ratio.
    std::shared_ptr<int32_t> minServicePercent_ = nullptr;
    // Indicates whether the cluster is mounted.
    std::shared_ptr<bool> published_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
