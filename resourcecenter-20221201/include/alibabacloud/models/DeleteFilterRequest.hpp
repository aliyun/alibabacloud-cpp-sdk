// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class DeleteFilterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFilterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterName, filterName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFilterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterName, filterName_);
    };
    DeleteFilterRequest() = default ;
    DeleteFilterRequest(const DeleteFilterRequest &) = default ;
    DeleteFilterRequest(DeleteFilterRequest &&) = default ;
    DeleteFilterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFilterRequest() = default ;
    DeleteFilterRequest& operator=(const DeleteFilterRequest &) = default ;
    DeleteFilterRequest& operator=(DeleteFilterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterName_ != nullptr; };
    // filterName Field Functions 
    bool hasFilterName() const { return this->filterName_ != nullptr;};
    void deleteFilterName() { this->filterName_ = nullptr;};
    inline string filterName() const { DARABONBA_PTR_GET_DEFAULT(filterName_, "") };
    inline DeleteFilterRequest& setFilterName(string filterName) { DARABONBA_PTR_SET_VALUE(filterName_, filterName) };


  protected:
    // The name of the filter.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
