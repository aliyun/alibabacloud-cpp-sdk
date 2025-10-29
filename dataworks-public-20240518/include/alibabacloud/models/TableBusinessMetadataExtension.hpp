// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEBUSINESSMETADATAEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_TABLEBUSINESSMETADATAEXTENSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TableBusinessMetadataExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableBusinessMetadataExtension& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(FavorCount, favorCount_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
      DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
    };
    friend void from_json(const Darabonba::Json& j, TableBusinessMetadataExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(FavorCount, favorCount_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
      DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
    };
    TableBusinessMetadataExtension() = default ;
    TableBusinessMetadataExtension(const TableBusinessMetadataExtension &) = default ;
    TableBusinessMetadataExtension(TableBusinessMetadataExtension &&) = default ;
    TableBusinessMetadataExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableBusinessMetadataExtension() = default ;
    TableBusinessMetadataExtension& operator=(const TableBusinessMetadataExtension &) = default ;
    TableBusinessMetadataExtension& operator=(TableBusinessMetadataExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envType_ == nullptr
        && return this->favorCount_ == nullptr && return this->projectId_ == nullptr && return this->readCount_ == nullptr && return this->viewCount_ == nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TableBusinessMetadataExtension& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // favorCount Field Functions 
    bool hasFavorCount() const { return this->favorCount_ != nullptr;};
    void deleteFavorCount() { this->favorCount_ = nullptr;};
    inline int64_t favorCount() const { DARABONBA_PTR_GET_DEFAULT(favorCount_, 0L) };
    inline TableBusinessMetadataExtension& setFavorCount(int64_t favorCount) { DARABONBA_PTR_SET_VALUE(favorCount_, favorCount) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TableBusinessMetadataExtension& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // readCount Field Functions 
    bool hasReadCount() const { return this->readCount_ != nullptr;};
    void deleteReadCount() { this->readCount_ = nullptr;};
    inline int64_t readCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
    inline TableBusinessMetadataExtension& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


    // viewCount Field Functions 
    bool hasViewCount() const { return this->viewCount_ != nullptr;};
    void deleteViewCount() { this->viewCount_ = nullptr;};
    inline int64_t viewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
    inline TableBusinessMetadataExtension& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


  protected:
    std::shared_ptr<string> envType_ = nullptr;
    std::shared_ptr<int64_t> favorCount_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<int64_t> readCount_ = nullptr;
    std::shared_ptr<int64_t> viewCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
