// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KDTREEOPTION_HPP_
#define ALIBABACLOUD_MODELS_KDTREEOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class KdtreeOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KdtreeOption& obj) { 
      DARABONBA_PTR_TO_JSON(CompressionLevel, compressionLevel_);
      DARABONBA_PTR_TO_JSON(LibraryName, libraryName_);
      DARABONBA_PTR_TO_JSON(QuantizationBits, quantizationBits_);
    };
    friend void from_json(const Darabonba::Json& j, KdtreeOption& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressionLevel, compressionLevel_);
      DARABONBA_PTR_FROM_JSON(LibraryName, libraryName_);
      DARABONBA_PTR_FROM_JSON(QuantizationBits, quantizationBits_);
    };
    KdtreeOption() = default ;
    KdtreeOption(const KdtreeOption &) = default ;
    KdtreeOption(KdtreeOption &&) = default ;
    KdtreeOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KdtreeOption() = default ;
    KdtreeOption& operator=(const KdtreeOption &) = default ;
    KdtreeOption& operator=(KdtreeOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compressionLevel_ != nullptr
        && this->libraryName_ != nullptr && this->quantizationBits_ != nullptr; };
    // compressionLevel Field Functions 
    bool hasCompressionLevel() const { return this->compressionLevel_ != nullptr;};
    void deleteCompressionLevel() { this->compressionLevel_ = nullptr;};
    inline int32_t compressionLevel() const { DARABONBA_PTR_GET_DEFAULT(compressionLevel_, 0) };
    inline KdtreeOption& setCompressionLevel(int32_t compressionLevel) { DARABONBA_PTR_SET_VALUE(compressionLevel_, compressionLevel) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string libraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline KdtreeOption& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


    // quantizationBits Field Functions 
    bool hasQuantizationBits() const { return this->quantizationBits_ != nullptr;};
    void deleteQuantizationBits() { this->quantizationBits_ = nullptr;};
    inline int32_t quantizationBits() const { DARABONBA_PTR_GET_DEFAULT(quantizationBits_, 0) };
    inline KdtreeOption& setQuantizationBits(int32_t quantizationBits) { DARABONBA_PTR_SET_VALUE(quantizationBits_, quantizationBits) };


  protected:
    std::shared_ptr<int32_t> compressionLevel_ = nullptr;
    std::shared_ptr<string> libraryName_ = nullptr;
    std::shared_ptr<int32_t> quantizationBits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
