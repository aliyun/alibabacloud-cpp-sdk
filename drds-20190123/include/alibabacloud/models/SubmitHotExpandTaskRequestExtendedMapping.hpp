// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTEXTENDEDMAPPING_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTEXTENDEDMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitHotExpandTaskRequestExtendedMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotExpandTaskRequestExtendedMapping& obj) { 
      DARABONBA_PTR_TO_JSON(SrcDb, srcDb_);
      DARABONBA_PTR_TO_JSON(SrcInstanceId, srcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotExpandTaskRequestExtendedMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(SrcDb, srcDb_);
      DARABONBA_PTR_FROM_JSON(SrcInstanceId, srcInstanceId_);
    };
    SubmitHotExpandTaskRequestExtendedMapping() = default ;
    SubmitHotExpandTaskRequestExtendedMapping(const SubmitHotExpandTaskRequestExtendedMapping &) = default ;
    SubmitHotExpandTaskRequestExtendedMapping(SubmitHotExpandTaskRequestExtendedMapping &&) = default ;
    SubmitHotExpandTaskRequestExtendedMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotExpandTaskRequestExtendedMapping() = default ;
    SubmitHotExpandTaskRequestExtendedMapping& operator=(const SubmitHotExpandTaskRequestExtendedMapping &) = default ;
    SubmitHotExpandTaskRequestExtendedMapping& operator=(SubmitHotExpandTaskRequestExtendedMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->srcDb_ != nullptr
        && this->srcInstanceId_ != nullptr; };
    // srcDb Field Functions 
    bool hasSrcDb() const { return this->srcDb_ != nullptr;};
    void deleteSrcDb() { this->srcDb_ = nullptr;};
    inline string srcDb() const { DARABONBA_PTR_GET_DEFAULT(srcDb_, "") };
    inline SubmitHotExpandTaskRequestExtendedMapping& setSrcDb(string srcDb) { DARABONBA_PTR_SET_VALUE(srcDb_, srcDb) };


    // srcInstanceId Field Functions 
    bool hasSrcInstanceId() const { return this->srcInstanceId_ != nullptr;};
    void deleteSrcInstanceId() { this->srcInstanceId_ = nullptr;};
    inline string srcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceId_, "") };
    inline SubmitHotExpandTaskRequestExtendedMapping& setSrcInstanceId(string srcInstanceId) { DARABONBA_PTR_SET_VALUE(srcInstanceId_, srcInstanceId) };


  protected:
    // The name of the source physical database.
    std::shared_ptr<string> srcDb_ = nullptr;
    // The ID of the ApsaraDB RDS instance to which the source physical database belongs.
    std::shared_ptr<string> srcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
