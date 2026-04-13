// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DeleteStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cleanResources, cleanResources_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cleanResources, cleanResources_);
    };
    DeleteStackRequest() = default ;
    DeleteStackRequest(const DeleteStackRequest &) = default ;
    DeleteStackRequest(DeleteStackRequest &&) = default ;
    DeleteStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStackRequest() = default ;
    DeleteStackRequest& operator=(const DeleteStackRequest &) = default ;
    DeleteStackRequest& operator=(DeleteStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cleanResources_ == nullptr; };
    // cleanResources Field Functions 
    bool hasCleanResources() const { return this->cleanResources_ != nullptr;};
    void deleteCleanResources() { this->cleanResources_ = nullptr;};
    inline bool getCleanResources() const { DARABONBA_PTR_GET_DEFAULT(cleanResources_, false) };
    inline DeleteStackRequest& setCleanResources(bool cleanResources) { DARABONBA_PTR_SET_VALUE(cleanResources_, cleanResources) };


  protected:
    shared_ptr<bool> cleanResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
