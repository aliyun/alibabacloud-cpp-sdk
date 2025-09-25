// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQALIBRARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQALIBRARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateQaLibraryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQaLibraryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(qaLibraryId, qaLibraryId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQaLibraryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(qaLibraryId, qaLibraryId_);
    };
    UpdateQaLibraryResponseBodyData() = default ;
    UpdateQaLibraryResponseBodyData(const UpdateQaLibraryResponseBodyData &) = default ;
    UpdateQaLibraryResponseBodyData(UpdateQaLibraryResponseBodyData &&) = default ;
    UpdateQaLibraryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQaLibraryResponseBodyData() = default ;
    UpdateQaLibraryResponseBodyData& operator=(const UpdateQaLibraryResponseBodyData &) = default ;
    UpdateQaLibraryResponseBodyData& operator=(UpdateQaLibraryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qaLibraryId_ != nullptr; };
    // qaLibraryId Field Functions 
    bool hasQaLibraryId() const { return this->qaLibraryId_ != nullptr;};
    void deleteQaLibraryId() { this->qaLibraryId_ = nullptr;};
    inline string qaLibraryId() const { DARABONBA_PTR_GET_DEFAULT(qaLibraryId_, "") };
    inline UpdateQaLibraryResponseBodyData& setQaLibraryId(string qaLibraryId) { DARABONBA_PTR_SET_VALUE(qaLibraryId_, qaLibraryId) };


  protected:
    std::shared_ptr<string> qaLibraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
