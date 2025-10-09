// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODYPAGINGINFOCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODYPAGINGINFOCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCertificatesResponseBodyPagingInfoCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesResponseBodyPagingInfoCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSizeInBytes, fileSizeInBytes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesResponseBodyPagingInfoCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSizeInBytes, fileSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListCertificatesResponseBodyPagingInfoCertificates() = default ;
    ListCertificatesResponseBodyPagingInfoCertificates(const ListCertificatesResponseBodyPagingInfoCertificates &) = default ;
    ListCertificatesResponseBodyPagingInfoCertificates(ListCertificatesResponseBodyPagingInfoCertificates &&) = default ;
    ListCertificatesResponseBodyPagingInfoCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesResponseBodyPagingInfoCertificates() = default ;
    ListCertificatesResponseBodyPagingInfoCertificates& operator=(const ListCertificatesResponseBodyPagingInfoCertificates &) = default ;
    ListCertificatesResponseBodyPagingInfoCertificates& operator=(ListCertificatesResponseBodyPagingInfoCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->description_ != nullptr && this->fileSizeInBytes_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListCertificatesResponseBodyPagingInfoCertificates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListCertificatesResponseBodyPagingInfoCertificates& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCertificatesResponseBodyPagingInfoCertificates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSizeInBytes Field Functions 
    bool hasFileSizeInBytes() const { return this->fileSizeInBytes_ != nullptr;};
    void deleteFileSizeInBytes() { this->fileSizeInBytes_ = nullptr;};
    inline int64_t fileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(fileSizeInBytes_, 0L) };
    inline ListCertificatesResponseBodyPagingInfoCertificates& setFileSizeInBytes(int64_t fileSizeInBytes) { DARABONBA_PTR_SET_VALUE(fileSizeInBytes_, fileSizeInBytes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCertificatesResponseBodyPagingInfoCertificates& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCertificatesResponseBodyPagingInfoCertificates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The time when the certificate file was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who created the certificate file.
    std::shared_ptr<string> createUser_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The size of the certificate file, in bytes.
    std::shared_ptr<int64_t> fileSizeInBytes_ = nullptr;
    // The ID of the certificate file.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the certificate file.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
