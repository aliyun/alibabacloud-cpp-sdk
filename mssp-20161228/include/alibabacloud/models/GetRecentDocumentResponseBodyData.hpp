// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECENTDOCUMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRECENTDOCUMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetRecentDocumentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecentDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecentDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    GetRecentDocumentResponseBodyData() = default ;
    GetRecentDocumentResponseBodyData(const GetRecentDocumentResponseBodyData &) = default ;
    GetRecentDocumentResponseBodyData(GetRecentDocumentResponseBodyData &&) = default ;
    GetRecentDocumentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecentDocumentResponseBodyData() = default ;
    GetRecentDocumentResponseBodyData& operator=(const GetRecentDocumentResponseBodyData &) = default ;
    GetRecentDocumentResponseBodyData& operator=(GetRecentDocumentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->uploadTime_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetRecentDocumentResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRecentDocumentResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline GetRecentDocumentResponseBodyData& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Document name
    std::shared_ptr<string> name_ = nullptr;
    // Upload time.
    std::shared_ptr<string> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
