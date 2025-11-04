// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILETAGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILETAGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateFileTagResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileTagResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileTagResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    UpdateFileTagResponseBodyData() = default ;
    UpdateFileTagResponseBodyData(const UpdateFileTagResponseBodyData &) = default ;
    UpdateFileTagResponseBodyData(UpdateFileTagResponseBodyData &&) = default ;
    UpdateFileTagResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileTagResponseBodyData() = default ;
    UpdateFileTagResponseBodyData& operator=(const UpdateFileTagResponseBodyData &) = default ;
    UpdateFileTagResponseBodyData& operator=(UpdateFileTagResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UpdateFileTagResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
