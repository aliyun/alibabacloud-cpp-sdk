// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTAREQUESTFILEPATHQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTAREQUESTFILEPATHQUOTAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SetPolarFsFileQuotaRequestFilePathQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolarFsFileQuotaRequestFilePathQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(FilePathId, filePathId_);
      DARABONBA_PTR_TO_JSON(MaxDepth, maxDepth_);
      DARABONBA_PTR_TO_JSON(QuotaIds, quotaIds_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolarFsFileQuotaRequestFilePathQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePathId, filePathId_);
      DARABONBA_PTR_FROM_JSON(MaxDepth, maxDepth_);
      DARABONBA_PTR_FROM_JSON(QuotaIds, quotaIds_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    SetPolarFsFileQuotaRequestFilePathQuotas() = default ;
    SetPolarFsFileQuotaRequestFilePathQuotas(const SetPolarFsFileQuotaRequestFilePathQuotas &) = default ;
    SetPolarFsFileQuotaRequestFilePathQuotas(SetPolarFsFileQuotaRequestFilePathQuotas &&) = default ;
    SetPolarFsFileQuotaRequestFilePathQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolarFsFileQuotaRequestFilePathQuotas() = default ;
    SetPolarFsFileQuotaRequestFilePathQuotas& operator=(const SetPolarFsFileQuotaRequestFilePathQuotas &) = default ;
    SetPolarFsFileQuotaRequestFilePathQuotas& operator=(SetPolarFsFileQuotaRequestFilePathQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePathId_ == nullptr
        && return this->maxDepth_ == nullptr && return this->quotaIds_ == nullptr && return this->strategy_ == nullptr; };
    // filePathId Field Functions 
    bool hasFilePathId() const { return this->filePathId_ != nullptr;};
    void deleteFilePathId() { this->filePathId_ = nullptr;};
    inline string filePathId() const { DARABONBA_PTR_GET_DEFAULT(filePathId_, "") };
    inline SetPolarFsFileQuotaRequestFilePathQuotas& setFilePathId(string filePathId) { DARABONBA_PTR_SET_VALUE(filePathId_, filePathId) };


    // maxDepth Field Functions 
    bool hasMaxDepth() const { return this->maxDepth_ != nullptr;};
    void deleteMaxDepth() { this->maxDepth_ = nullptr;};
    inline int32_t maxDepth() const { DARABONBA_PTR_GET_DEFAULT(maxDepth_, 0) };
    inline SetPolarFsFileQuotaRequestFilePathQuotas& setMaxDepth(int32_t maxDepth) { DARABONBA_PTR_SET_VALUE(maxDepth_, maxDepth) };


    // quotaIds Field Functions 
    bool hasQuotaIds() const { return this->quotaIds_ != nullptr;};
    void deleteQuotaIds() { this->quotaIds_ = nullptr;};
    inline string quotaIds() const { DARABONBA_PTR_GET_DEFAULT(quotaIds_, "") };
    inline SetPolarFsFileQuotaRequestFilePathQuotas& setQuotaIds(string quotaIds) { DARABONBA_PTR_SET_VALUE(quotaIds_, quotaIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline SetPolarFsFileQuotaRequestFilePathQuotas& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<string> filePathId_ = nullptr;
    std::shared_ptr<int32_t> maxDepth_ = nullptr;
    std::shared_ptr<string> quotaIds_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
