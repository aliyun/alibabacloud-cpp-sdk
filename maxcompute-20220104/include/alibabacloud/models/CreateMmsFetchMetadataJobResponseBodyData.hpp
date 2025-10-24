// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSFETCHMETADATAJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSFETCHMETADATAJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsFetchMetadataJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsFetchMetadataJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(scanId, scanId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsFetchMetadataJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(scanId, scanId_);
    };
    CreateMmsFetchMetadataJobResponseBodyData() = default ;
    CreateMmsFetchMetadataJobResponseBodyData(const CreateMmsFetchMetadataJobResponseBodyData &) = default ;
    CreateMmsFetchMetadataJobResponseBodyData(CreateMmsFetchMetadataJobResponseBodyData &&) = default ;
    CreateMmsFetchMetadataJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsFetchMetadataJobResponseBodyData() = default ;
    CreateMmsFetchMetadataJobResponseBodyData& operator=(const CreateMmsFetchMetadataJobResponseBodyData &) = default ;
    CreateMmsFetchMetadataJobResponseBodyData& operator=(CreateMmsFetchMetadataJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scanId_ == nullptr; };
    // scanId Field Functions 
    bool hasScanId() const { return this->scanId_ != nullptr;};
    void deleteScanId() { this->scanId_ = nullptr;};
    inline int64_t scanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, 0L) };
    inline CreateMmsFetchMetadataJobResponseBodyData& setScanId(int64_t scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


  protected:
    std::shared_ptr<int64_t> scanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
