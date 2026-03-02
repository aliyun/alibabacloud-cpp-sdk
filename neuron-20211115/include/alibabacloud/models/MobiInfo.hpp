// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBIINFO_HPP_
#define ALIBABACLOUD_MODELS_MOBIINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MobiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(mobiCommitId, mobiCommitId_);
      DARABONBA_PTR_TO_JSON(mobiId, mobiId_);
      DARABONBA_PTR_TO_JSON(mobiModuleId, mobiModuleId_);
      DARABONBA_PTR_TO_JSON(storeUrl, storeUrl_);
    };
    friend void from_json(const Darabonba::Json& j, MobiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(mobiCommitId, mobiCommitId_);
      DARABONBA_PTR_FROM_JSON(mobiId, mobiId_);
      DARABONBA_PTR_FROM_JSON(mobiModuleId, mobiModuleId_);
      DARABONBA_PTR_FROM_JSON(storeUrl, storeUrl_);
    };
    MobiInfo() = default ;
    MobiInfo(const MobiInfo &) = default ;
    MobiInfo(MobiInfo &&) = default ;
    MobiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobiInfo() = default ;
    MobiInfo& operator=(const MobiInfo &) = default ;
    MobiInfo& operator=(MobiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobiCommitId_ == nullptr
        && this->mobiId_ == nullptr && this->mobiModuleId_ == nullptr && this->storeUrl_ == nullptr; };
    // mobiCommitId Field Functions 
    bool hasMobiCommitId() const { return this->mobiCommitId_ != nullptr;};
    void deleteMobiCommitId() { this->mobiCommitId_ = nullptr;};
    inline string getMobiCommitId() const { DARABONBA_PTR_GET_DEFAULT(mobiCommitId_, "") };
    inline MobiInfo& setMobiCommitId(string mobiCommitId) { DARABONBA_PTR_SET_VALUE(mobiCommitId_, mobiCommitId) };


    // mobiId Field Functions 
    bool hasMobiId() const { return this->mobiId_ != nullptr;};
    void deleteMobiId() { this->mobiId_ = nullptr;};
    inline int64_t getMobiId() const { DARABONBA_PTR_GET_DEFAULT(mobiId_, 0L) };
    inline MobiInfo& setMobiId(int64_t mobiId) { DARABONBA_PTR_SET_VALUE(mobiId_, mobiId) };


    // mobiModuleId Field Functions 
    bool hasMobiModuleId() const { return this->mobiModuleId_ != nullptr;};
    void deleteMobiModuleId() { this->mobiModuleId_ = nullptr;};
    inline string getMobiModuleId() const { DARABONBA_PTR_GET_DEFAULT(mobiModuleId_, "") };
    inline MobiInfo& setMobiModuleId(string mobiModuleId) { DARABONBA_PTR_SET_VALUE(mobiModuleId_, mobiModuleId) };


    // storeUrl Field Functions 
    bool hasStoreUrl() const { return this->storeUrl_ != nullptr;};
    void deleteStoreUrl() { this->storeUrl_ = nullptr;};
    inline string getStoreUrl() const { DARABONBA_PTR_GET_DEFAULT(storeUrl_, "") };
    inline MobiInfo& setStoreUrl(string storeUrl) { DARABONBA_PTR_SET_VALUE(storeUrl_, storeUrl) };


  protected:
    shared_ptr<string> mobiCommitId_ {};
    shared_ptr<int64_t> mobiId_ {};
    shared_ptr<string> mobiModuleId_ {};
    shared_ptr<string> storeUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
