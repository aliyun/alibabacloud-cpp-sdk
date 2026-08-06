// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEDATAINSIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEDATAINSIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DisableDataInsightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableDataInsightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableDataInsightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    DisableDataInsightRequest() = default ;
    DisableDataInsightRequest(const DisableDataInsightRequest &) = default ;
    DisableDataInsightRequest(DisableDataInsightRequest &&) = default ;
    DisableDataInsightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableDataInsightRequest() = default ;
    DisableDataInsightRequest& operator=(const DisableDataInsightRequest &) = default ;
    DisableDataInsightRequest& operator=(DisableDataInsightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DisableDataInsightRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
