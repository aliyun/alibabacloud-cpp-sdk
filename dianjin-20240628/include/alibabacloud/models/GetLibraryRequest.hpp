// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    GetLibraryRequest() = default ;
    GetLibraryRequest(const GetLibraryRequest &) = default ;
    GetLibraryRequest(GetLibraryRequest &&) = default ;
    GetLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryRequest() = default ;
    GetLibraryRequest& operator=(const GetLibraryRequest &) = default ;
    GetLibraryRequest& operator=(GetLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->libraryId_ != nullptr; };
    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetLibraryRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
