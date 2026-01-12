// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEANSWERLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEANSWERLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DeleteAnswerLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAnswerLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAnswerLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAnswerLibRequest() = default ;
    DeleteAnswerLibRequest(const DeleteAnswerLibRequest &) = default ;
    DeleteAnswerLibRequest(DeleteAnswerLibRequest &&) = default ;
    DeleteAnswerLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAnswerLibRequest() = default ;
    DeleteAnswerLibRequest& operator=(const DeleteAnswerLibRequest &) = default ;
    DeleteAnswerLibRequest& operator=(DeleteAnswerLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libId_ == nullptr
        && this->regionId_ == nullptr; };
    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline DeleteAnswerLibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAnswerLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> libId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
