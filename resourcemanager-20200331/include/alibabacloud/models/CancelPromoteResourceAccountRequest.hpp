// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPROMOTERESOURCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELPROMOTERESOURCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CancelPromoteResourceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPromoteResourceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPromoteResourceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    CancelPromoteResourceAccountRequest() = default ;
    CancelPromoteResourceAccountRequest(const CancelPromoteResourceAccountRequest &) = default ;
    CancelPromoteResourceAccountRequest(CancelPromoteResourceAccountRequest &&) = default ;
    CancelPromoteResourceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPromoteResourceAccountRequest() = default ;
    CancelPromoteResourceAccountRequest& operator=(const CancelPromoteResourceAccountRequest &) = default ;
    CancelPromoteResourceAccountRequest& operator=(CancelPromoteResourceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline CancelPromoteResourceAccountRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    // The account record ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
