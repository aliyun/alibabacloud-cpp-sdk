// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKRESPONSEBODYUPDATERESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKRESPONSEBODYUPDATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBatchTaskResponseBodyUpdateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskResponseBodyUpdateResult& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskResponseBodyUpdateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    UpdateBatchTaskResponseBodyUpdateResult() = default ;
    UpdateBatchTaskResponseBodyUpdateResult(const UpdateBatchTaskResponseBodyUpdateResult &) = default ;
    UpdateBatchTaskResponseBodyUpdateResult(UpdateBatchTaskResponseBodyUpdateResult &&) = default ;
    UpdateBatchTaskResponseBodyUpdateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskResponseBodyUpdateResult() = default ;
    UpdateBatchTaskResponseBodyUpdateResult& operator=(const UpdateBatchTaskResponseBodyUpdateResult &) = default ;
    UpdateBatchTaskResponseBodyUpdateResult& operator=(UpdateBatchTaskResponseBodyUpdateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline UpdateBatchTaskResponseBodyUpdateResult& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    std::shared_ptr<int64_t> fileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
