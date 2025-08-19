// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDICTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDictRequestFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateDictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowCover, allowCover_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowCover, allowCover_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateDictRequest() = default ;
    UpdateDictRequest(const UpdateDictRequest &) = default ;
    UpdateDictRequest(UpdateDictRequest &&) = default ;
    UpdateDictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDictRequest() = default ;
    UpdateDictRequest& operator=(const UpdateDictRequest &) = default ;
    UpdateDictRequest& operator=(UpdateDictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCover_ != nullptr
        && this->files_ != nullptr && this->sourceType_ != nullptr && this->type_ != nullptr && this->dryRun_ != nullptr; };
    // allowCover Field Functions 
    bool hasAllowCover() const { return this->allowCover_ != nullptr;};
    void deleteAllowCover() { this->allowCover_ = nullptr;};
    inline bool allowCover() const { DARABONBA_PTR_GET_DEFAULT(allowCover_, false) };
    inline UpdateDictRequest& setAllowCover(bool allowCover) { DARABONBA_PTR_SET_VALUE(allowCover_, allowCover) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<UpdateDictRequestFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<UpdateDictRequestFiles>) };
    inline vector<UpdateDictRequestFiles> files() { DARABONBA_PTR_GET(files_, vector<UpdateDictRequestFiles>) };
    inline UpdateDictRequest& setFiles(const vector<UpdateDictRequestFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline UpdateDictRequest& setFiles(vector<UpdateDictRequestFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateDictRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateDictRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateDictRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    std::shared_ptr<bool> allowCover_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpdateDictRequestFiles>> files_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
