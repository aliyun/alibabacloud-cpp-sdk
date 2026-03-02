// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Library.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryListResult& obj) { 
      DARABONBA_PTR_TO_JSON(librarys, librarys_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(librarys, librarys_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    LibraryListResult() = default ;
    LibraryListResult(const LibraryListResult &) = default ;
    LibraryListResult(LibraryListResult &&) = default ;
    LibraryListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryListResult() = default ;
    LibraryListResult& operator=(const LibraryListResult &) = default ;
    LibraryListResult& operator=(LibraryListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->librarys_ == nullptr
        && this->requestId_ == nullptr; };
    // librarys Field Functions 
    bool hasLibrarys() const { return this->librarys_ != nullptr;};
    void deleteLibrarys() { this->librarys_ = nullptr;};
    inline const vector<Library> & getLibrarys() const { DARABONBA_PTR_GET_CONST(librarys_, vector<Library>) };
    inline vector<Library> getLibrarys() { DARABONBA_PTR_GET(librarys_, vector<Library>) };
    inline LibraryListResult& setLibrarys(const vector<Library> & librarys) { DARABONBA_PTR_SET_VALUE(librarys_, librarys) };
    inline LibraryListResult& setLibrarys(vector<Library> && librarys) { DARABONBA_PTR_SET_RVALUE(librarys_, librarys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LibraryListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Library>> librarys_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
