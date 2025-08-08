// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTMASTERKEYVO_HPP_
#define ALIBABACLOUD_MODELS_IMPORTMASTERKEYVO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ImportMasterKeyVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportMasterKeyVO& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptMekDataBase64, encryptMekDataBase64_);
      DARABONBA_PTR_TO_JSON(MekId, mekId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportMasterKeyVO& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptMekDataBase64, encryptMekDataBase64_);
      DARABONBA_PTR_FROM_JSON(MekId, mekId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ImportMasterKeyVO() = default ;
    ImportMasterKeyVO(const ImportMasterKeyVO &) = default ;
    ImportMasterKeyVO(ImportMasterKeyVO &&) = default ;
    ImportMasterKeyVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportMasterKeyVO() = default ;
    ImportMasterKeyVO& operator=(const ImportMasterKeyVO &) = default ;
    ImportMasterKeyVO& operator=(ImportMasterKeyVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptMekDataBase64_ != nullptr
        && this->mekId_ != nullptr && this->projectId_ != nullptr; };
    // encryptMekDataBase64 Field Functions 
    bool hasEncryptMekDataBase64() const { return this->encryptMekDataBase64_ != nullptr;};
    void deleteEncryptMekDataBase64() { this->encryptMekDataBase64_ = nullptr;};
    inline string encryptMekDataBase64() const { DARABONBA_PTR_GET_DEFAULT(encryptMekDataBase64_, "") };
    inline ImportMasterKeyVO& setEncryptMekDataBase64(string encryptMekDataBase64) { DARABONBA_PTR_SET_VALUE(encryptMekDataBase64_, encryptMekDataBase64) };


    // mekId Field Functions 
    bool hasMekId() const { return this->mekId_ != nullptr;};
    void deleteMekId() { this->mekId_ = nullptr;};
    inline int64_t mekId() const { DARABONBA_PTR_GET_DEFAULT(mekId_, 0L) };
    inline ImportMasterKeyVO& setMekId(int64_t mekId) { DARABONBA_PTR_SET_VALUE(mekId_, mekId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline const vector<int64_t> & projectId() const { DARABONBA_PTR_GET_CONST(projectId_, vector<int64_t>) };
    inline vector<int64_t> projectId() { DARABONBA_PTR_GET(projectId_, vector<int64_t>) };
    inline ImportMasterKeyVO& setProjectId(const vector<int64_t> & projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };
    inline ImportMasterKeyVO& setProjectId(vector<int64_t> && projectId) { DARABONBA_PTR_SET_RVALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> encryptMekDataBase64_ = nullptr;
    std::shared_ptr<int64_t> mekId_ = nullptr;
    std::shared_ptr<vector<int64_t>> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
