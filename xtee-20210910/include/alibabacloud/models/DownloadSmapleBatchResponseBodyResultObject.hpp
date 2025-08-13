// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DownloadSmapleBatchResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSmapleBatchResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(fileDownloadURL, fileDownloadURL_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSmapleBatchResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(fileDownloadURL, fileDownloadURL_);
    };
    DownloadSmapleBatchResponseBodyResultObject() = default ;
    DownloadSmapleBatchResponseBodyResultObject(const DownloadSmapleBatchResponseBodyResultObject &) = default ;
    DownloadSmapleBatchResponseBodyResultObject(DownloadSmapleBatchResponseBodyResultObject &&) = default ;
    DownloadSmapleBatchResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSmapleBatchResponseBodyResultObject() = default ;
    DownloadSmapleBatchResponseBodyResultObject& operator=(const DownloadSmapleBatchResponseBodyResultObject &) = default ;
    DownloadSmapleBatchResponseBodyResultObject& operator=(DownloadSmapleBatchResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileDownloadURL_ != nullptr; };
    // fileDownloadURL Field Functions 
    bool hasFileDownloadURL() const { return this->fileDownloadURL_ != nullptr;};
    void deleteFileDownloadURL() { this->fileDownloadURL_ = nullptr;};
    inline string fileDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(fileDownloadURL_, "") };
    inline DownloadSmapleBatchResponseBodyResultObject& setFileDownloadURL(string fileDownloadURL) { DARABONBA_PTR_SET_VALUE(fileDownloadURL_, fileDownloadURL) };


  protected:
    // Download URL
    std::shared_ptr<string> fileDownloadURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
